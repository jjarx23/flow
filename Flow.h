#ifndef FLOW_H
#define FLOW_H

#ifdef __cplusplus
extern 'C'
{
#endif

    typedef struct Flow
    {
        void *zero;
        void *one;
        int (*stringOf)(const void *, char *, size_t);
        void *(*add)(void *, void *);
        void *(*multiply)(void *, void *);
        void *(*divide)(void *, void *);
        void *(*subtract)(void *, void *);
        void *(*power)(void *, void *);
    } *Flow_t;
    typedef struct DFlow
    {
        void *(*add)(void *, void *, void *);
        void *(*multiply)(void *, void *, void *);
        void *(*divide)(void *, void *, void *);
        void *(*subtract)(void *, void *, void *);
        void *(*power)(void *, void *, void *);
    } *DFlow_t;

    extern const Flow_t Flow;
    extern const DFlow_t DFlow;
    // other declarations go here

#ifdef __cplusplus
}
#endif
#endif