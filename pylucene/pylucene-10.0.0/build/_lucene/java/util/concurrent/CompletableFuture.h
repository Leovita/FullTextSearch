#ifndef java_util_concurrent_CompletableFuture_H
#define java_util_concurrent_CompletableFuture_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Throwable;
    class Class;
    class Void;
    class String;
    class Runnable;
  }
  namespace util {
    namespace concurrent {
      class CompletableFuture;
      class TimeoutException;
      class CompletionStage;
      class Executor;
      class Future$State;
      class TimeUnit;
      class Future;
      class ExecutionException;
    }
    namespace function {
      class Function;
      class BiFunction;
      class BiConsumer;
      class Supplier;
      class Consumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class CompletableFuture : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e7bdbe105ce1bafb,
          mid_acceptEither_d870b69b3e91cce5,
          mid_acceptEitherAsync_d870b69b3e91cce5,
          mid_acceptEitherAsync_aa7d290546e558cb,
          mid_allOf_5c23704ae3654ac0,
          mid_anyOf_5c23704ae3654ac0,
          mid_applyToEither_b8d351aa769fa258,
          mid_applyToEitherAsync_b8d351aa769fa258,
          mid_applyToEitherAsync_b37e035c8c2736bf,
          mid_cancel_7c42d16ca5eaa145,
          mid_complete_00d17418847797d4,
          mid_completeAsync_fdb2110d7166535a,
          mid_completeAsync_b5d9db08de9250aa,
          mid_completeExceptionally_6faea1e7c6fa06ef,
          mid_completeOnTimeout_0f5145923db27e6a,
          mid_completedFuture_4324bb7bb73ca203,
          mid_completedStage_fd722f6c1bd7ddcd,
          mid_copy_645e0257444d1f5e,
          mid_defaultExecutor_1e77a913ad02df48,
          mid_delayedExecutor_85b5abc785a7d466,
          mid_delayedExecutor_e57a2398e1e70ddd,
          mid_exceptionNow_76f90963e923fefa,
          mid_exceptionally_f6bc15648269c7b6,
          mid_exceptionallyAsync_f6bc15648269c7b6,
          mid_exceptionallyAsync_840a1f20edc2dc7d,
          mid_exceptionallyCompose_f6bc15648269c7b6,
          mid_exceptionallyComposeAsync_f6bc15648269c7b6,
          mid_exceptionallyComposeAsync_840a1f20edc2dc7d,
          mid_failedFuture_82c378ccb0ac8ace,
          mid_failedStage_a3db8de89479f86e,
          mid_get_4819806f62f1360a,
          mid_get_ad1b8b5e28a7cd43,
          mid_getNow_e2c45b124c12f4ec,
          mid_getNumberOfDependents_bd89ce15dad49192,
          mid_handle_568916d4da8c8fef,
          mid_handleAsync_568916d4da8c8fef,
          mid_handleAsync_0f93479187c8d12b,
          mid_isCancelled_9aa4f33e82ea333f,
          mid_isCompletedExceptionally_9aa4f33e82ea333f,
          mid_isDone_9aa4f33e82ea333f,
          mid_join_4819806f62f1360a,
          mid_minimalCompletionStage_b9cc8743e0e3ebec,
          mid_newIncompleteFuture_645e0257444d1f5e,
          mid_obtrudeException_9b649326a1df01c3,
          mid_obtrudeValue_501c3eb890ff6d79,
          mid_orTimeout_aa66de751287d5af,
          mid_resultNow_4819806f62f1360a,
          mid_runAfterBoth_c7e94741d8f181c0,
          mid_runAfterBothAsync_c7e94741d8f181c0,
          mid_runAfterBothAsync_7e533e52c003c2ba,
          mid_runAfterEither_c7e94741d8f181c0,
          mid_runAfterEitherAsync_c7e94741d8f181c0,
          mid_runAfterEitherAsync_7e533e52c003c2ba,
          mid_runAsync_2aaf6cde6173c98b,
          mid_runAsync_ac56a06657c02192,
          mid_state_033a0f97d9c62181,
          mid_supplyAsync_fdb2110d7166535a,
          mid_supplyAsync_b5d9db08de9250aa,
          mid_thenAccept_6090cb9c88106525,
          mid_thenAcceptAsync_6090cb9c88106525,
          mid_thenAcceptAsync_5ffd26e58ca01f56,
          mid_thenAcceptBoth_d34dac5c92248332,
          mid_thenAcceptBothAsync_d34dac5c92248332,
          mid_thenAcceptBothAsync_31888780564c5a65,
          mid_thenApply_f6bc15648269c7b6,
          mid_thenApplyAsync_f6bc15648269c7b6,
          mid_thenApplyAsync_840a1f20edc2dc7d,
          mid_thenCombine_407f948e5617bbfd,
          mid_thenCombineAsync_407f948e5617bbfd,
          mid_thenCombineAsync_f8f797bfa6d50001,
          mid_thenCompose_f6bc15648269c7b6,
          mid_thenComposeAsync_f6bc15648269c7b6,
          mid_thenComposeAsync_840a1f20edc2dc7d,
          mid_thenRun_2aaf6cde6173c98b,
          mid_thenRunAsync_2aaf6cde6173c98b,
          mid_thenRunAsync_ac56a06657c02192,
          mid_toCompletableFuture_645e0257444d1f5e,
          mid_toString_e7df854526d67fa3,
          mid_whenComplete_2b1f01208ec4df75,
          mid_whenCompleteAsync_2b1f01208ec4df75,
          mid_whenCompleteAsync_46435112262a58da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompletableFuture(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompletableFuture(const CompletableFuture& obj) : ::java::lang::Object(obj) {}

        CompletableFuture();

        CompletableFuture acceptEither(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletableFuture acceptEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletableFuture acceptEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        static CompletableFuture allOf(const JArray< CompletableFuture > &);
        static CompletableFuture anyOf(const JArray< CompletableFuture > &);
        CompletableFuture applyToEither(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &) const;
        CompletableFuture applyToEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &) const;
        CompletableFuture applyToEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        jboolean cancel(jboolean) const;
        jboolean complete(const ::java::lang::Object &) const;
        CompletableFuture completeAsync(const ::java::util::function::Supplier &) const;
        CompletableFuture completeAsync(const ::java::util::function::Supplier &, const ::java::util::concurrent::Executor &) const;
        jboolean completeExceptionally(const ::java::lang::Throwable &) const;
        CompletableFuture completeOnTimeout(const ::java::lang::Object &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        static CompletableFuture completedFuture(const ::java::lang::Object &);
        static ::java::util::concurrent::CompletionStage completedStage(const ::java::lang::Object &);
        CompletableFuture copy() const;
        ::java::util::concurrent::Executor defaultExecutor() const;
        static ::java::util::concurrent::Executor delayedExecutor(jlong, const ::java::util::concurrent::TimeUnit &);
        static ::java::util::concurrent::Executor delayedExecutor(jlong, const ::java::util::concurrent::TimeUnit &, const ::java::util::concurrent::Executor &);
        ::java::lang::Throwable exceptionNow() const;
        CompletableFuture exceptionally(const ::java::util::function::Function &) const;
        CompletableFuture exceptionallyAsync(const ::java::util::function::Function &) const;
        CompletableFuture exceptionallyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture exceptionallyCompose(const ::java::util::function::Function &) const;
        CompletableFuture exceptionallyComposeAsync(const ::java::util::function::Function &) const;
        CompletableFuture exceptionallyComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        static CompletableFuture failedFuture(const ::java::lang::Throwable &);
        static ::java::util::concurrent::CompletionStage failedStage(const ::java::lang::Throwable &);
        ::java::lang::Object get() const;
        ::java::lang::Object get(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object getNow(const ::java::lang::Object &) const;
        jint getNumberOfDependents() const;
        CompletableFuture handle(const ::java::util::function::BiFunction &) const;
        CompletableFuture handleAsync(const ::java::util::function::BiFunction &) const;
        CompletableFuture handleAsync(const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        jboolean isCancelled() const;
        jboolean isCompletedExceptionally() const;
        jboolean isDone() const;
        ::java::lang::Object join() const;
        ::java::util::concurrent::CompletionStage minimalCompletionStage() const;
        CompletableFuture newIncompleteFuture() const;
        void obtrudeException(const ::java::lang::Throwable &) const;
        void obtrudeValue(const ::java::lang::Object &) const;
        CompletableFuture orTimeout(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object resultNow() const;
        CompletableFuture runAfterBoth(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture runAfterEither(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &) const;
        CompletableFuture runAfterEitherAsync(const ::java::util::concurrent::CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        static CompletableFuture runAsync(const ::java::lang::Runnable &);
        static CompletableFuture runAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &);
        ::java::util::concurrent::Future$State state() const;
        static CompletableFuture supplyAsync(const ::java::util::function::Supplier &);
        static CompletableFuture supplyAsync(const ::java::util::function::Supplier &, const ::java::util::concurrent::Executor &);
        CompletableFuture thenAccept(const ::java::util::function::Consumer &) const;
        CompletableFuture thenAcceptAsync(const ::java::util::function::Consumer &) const;
        CompletableFuture thenAcceptAsync(const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenAcceptBoth(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletableFuture thenAcceptBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletableFuture thenAcceptBothAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenApply(const ::java::util::function::Function &) const;
        CompletableFuture thenApplyAsync(const ::java::util::function::Function &) const;
        CompletableFuture thenApplyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenCombine(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletableFuture thenCombineAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletableFuture thenCombineAsync(const ::java::util::concurrent::CompletionStage &, const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenCompose(const ::java::util::function::Function &) const;
        CompletableFuture thenComposeAsync(const ::java::util::function::Function &) const;
        CompletableFuture thenComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture thenRun(const ::java::lang::Runnable &) const;
        CompletableFuture thenRunAsync(const ::java::lang::Runnable &) const;
        CompletableFuture thenRunAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletableFuture toCompletableFuture() const;
        ::java::lang::String toString() const;
        CompletableFuture whenComplete(const ::java::util::function::BiConsumer &) const;
        CompletableFuture whenCompleteAsync(const ::java::util::function::BiConsumer &) const;
        CompletableFuture whenCompleteAsync(const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(CompletableFuture);
      extern PyTypeObject *PY_TYPE(CompletableFuture);

      class t_CompletableFuture {
      public:
        PyObject_HEAD
        CompletableFuture object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CompletableFuture *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CompletableFuture&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CompletableFuture&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
