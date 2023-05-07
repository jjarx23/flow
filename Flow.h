#ifndef FLOW_H
#define FLOW_H

#define FLOW_VERSION_MAJOR 0
#define FLOW_VERSION_MINOR 2

#ifdef __cplusplus
extern 'C'
{
#endif

    struct FlowOp
    {
        void *(*add)(void *, void *, ...);
        void *(*multiply)(void *, void *, ...);
        void *(*divide)(void *, void *, ...);
        void *(*subtract)(void *, void *, ...);
        void *(*power)(void *, void *, ...);
    };
    struct Flow_st
    {
        const int V_MAJOR_NUMBER, V_MINOR_NUMBER;
        struct
        {
            void *zero;
            void *one;
        } constants;
        struct
        {
            int (*stringOf)(const void *, char *, size_t);
            void *(*fill)(int rank, int *shape, double d);
        } util;
        struct FlowOp math;
        struct FlowOp deriv;
    };

    extern const struct Flow_st *Flow_;
#define Flow (*Flow_)
#ifdef __cplusplus
}
#endif
#endif