#include <iostream>
using namespace std;

/* create tree */
struct node_t{
    int val; //値
    node_t *ch[2]; //{左、右};
    int pri; //優先度
    int cnt; //部分木のサイズ
    int sum; //部分木の値の和

    node_t(int v,duble p): val(v),pri(p),cnt(1),sum(v){
    ch[0] = ch[1] = NULL;
    }
};

/* update */
int count(node_t *t){return !t ? 0: t->cnt;}
int sum(notde_t *t){return !t ? 0: t->sum;}

node_t *update(node_t *t){
    t->cnt = count(t->ch[0])+count(t->[1])+1;
    t->sum = sum(t->ch[0])+sum(t->ch[1])+t->val;
    return t;
}

/* rotate */
node_t *rotate(node_t *t,int b){
    node_t *s = t->ch[1-b];
    t->ch[1-b] = s->ch[b];
    s->ch[b] = t;
    update(t);
    update(s);
    return s;
}

/* insert */
node_t *insert(node_t *t,int val,double pri){
    if(!t)return new node_t(val,phi);
    int c = count(t->ch[0]),b=(k>c);
    t->ch[b]=insert(t->ch[b],k-(b?(c+1):0),val,pri);
    update(t)
    if(t->pri > t->ch[b]->pri)t = rotate(t,1-b);
}

/* merge */
node_t *merge(node_t *l,node_t *r){
    if(!l || !r)return !l ? r: l;

    if(l->pri > r->pri){
        l->rch = merge(l->rch,r);
        return update(l);
    }else{
        r->lch = merge(l,r->lch);
        return update(r);
    }
}

/* split */
pair<node_t*, node_t*> split(node_t *t,int k){
    if(!t)return make_pair(NULL,NULL);

    if(k<=count(t->lch)){
        pair<node_t*,node_t*> s = split(t->lch,k);
        t->lch = s.second;
        return make_pair(s.firtst,update(t));
    }else{
        pair<node_t*,node_t*> s = split(t->rch,k-count(t->lch)-1);
        t->rch = s.first;
        return make_pair(update(t),s.second);
    }
}