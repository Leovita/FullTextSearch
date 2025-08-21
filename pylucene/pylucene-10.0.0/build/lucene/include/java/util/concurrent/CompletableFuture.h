#ifndef java_util_concurrent_CompletableFuture_H
#define java_util_concurrent_CompletableFuture_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Consumer;
      class BiConsumer;
      class Supplier;
      class BiFunction;
      class Function;
    }
    namespace concurrent {
      class ExecutionException;
      class CompletableFuture;
      class Future;
      class CompletionStage;
      class TimeUnit;
      class Future$State;
      class TimeoutException;
      class Executor;
    }
  }
  namespace lang {
    class Void;
    class Throwable;
    class Class;
    class Runnable;
    class String;
    class InterruptedException;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class CompletableFuture : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3720c61b0679eb3e,
          mid_acceptEither_445a3e604e5db948,
          mid_acceptEitherAsync_445a3e604e5db948,
          mid_acceptEitherAsync_43ff7ba980dde7b3,
          mid_allOf_144c1847e1ef49ea,
          mid_anyOf_144c1847e1ef49ea,
          mid_applyToEither_473596bff3fc2a0b,
          mid_applyToEitherAsync_473596bff3fc2a0b,
          mid_applyToEitherAsync_9ea1381f6c76f061,
          mid_cancel_6a2c1000a9889653,
          mid_complete_570b5248a6da3ef6,
          mid_completeAsync_1718b30149559b67,
          mid_completeAsync_4bb37dcb030164d0,
          mid_completeExceptionally_774adf0a613b2ba0,
          mid_completeOnTimeout_b76352edd581d7b3,
          mid_completedFuture_79ea32bb452b7ea6,
          mid_completedStage_8aa2107932981cb4,
          mid_copy_67c044688e7780df,
          mid_defaultExecutor_d64a300adcea1a9f,
          mid_delayedExecutor_cc8f228e0f963dc4,
          mid_delayedExecutor_0d5ad6c632df2f27,
          mid_exceptionNow_d175b950df78251e,
          mid_exceptionally_e8363e35ebc56629,
          mid_exceptionallyAsync_e8363e35ebc56629,
          mid_exceptionallyAsync_6b61e01ae0801c28,
          mid_exceptionallyCompose_e8363e35ebc56629,
          mid_exceptionallyComposeAsync_e8363e35ebc56629,
          mid_exceptionallyComposeAsync_6b61e01ae0801c28,
          mid_failedFuture_e0a780e1bf20bca6,
          mid_failedStage_0792c736f47e588e,
          mid_get_5655ed8670534604,
          mid_get_261f2550fa3ae634,
          mid_getNow_5fd81664d2d475e1,
          mid_getNumberOfDependents_20fbf7565993c3d7,
          mid_handle_139cf6a8be957974,
          mid_handleAsync_139cf6a8be957974,
          mid_handleAsync_96ecf0f4d700ce65,
          mid_isCancelled_947277eca0748c4e,
          mid_isCompletedExceptionally_947277eca0748c4e,
          mid_isDone_947277eca0748c4e,
          mid_join_5655ed8670534604,
          mid_minimalCompletionStage_48a51df1d2653cf0,
          mid_newIncompleteFuture_67c044688e7780df,
          mid_obtrudeException_4b71a6d99b73f7d1,
          mid_obtrudeValue_eb61ef4d1db15d08,
          mid_orTimeout_1ca3285712749cb6,
          mid_resultNow_5655ed8670534604,
          mid_runAfterBoth_dbfc2e58dfdc6d3a,
          mid_runAfterBothAsync_dbfc2e58dfdc6d3a,
          mid_runAfterBothAsync_21eed03e8fd8ef29,
          mid_runAfterEither_dbfc2e58dfdc6d3a,
          mid_runAfterEitherAsync_dbfc2e58dfdc6d3a,
          mid_runAfterEitherAsync_21eed03e8fd8ef29,
          mid_runAsync_7ffc960da9b87b9a,
          mid_runAsync_329ca80600de3db5,
          mid_state_3d0516f37f4dccff,
          mid_supplyAsync_1718b30149559b67,
          mid_supplyAsync_4bb37dcb030164d0,
          mid_thenAccept_107ab07b5d9c592f,
          mid_thenAcceptAsync_107ab07b5d9c592f,
          mid_thenAcceptAsync_3089d5bd48bdab6c,
          mid_thenAcceptBoth_44e216903a7fbe67,
          mid_thenAcceptBothAsync_44e216903a7fbe67,
          mid_thenAcceptBothAsync_314415e1dc9bda40,
          mid_thenApply_e8363e35ebc56629,
          mid_thenApplyAsync_e8363e35ebc56629,
          mid_thenApplyAsync_6b61e01ae0801c28,
          mid_thenCombine_c047b1888bb51fb4,
          mid_thenCombineAsync_c047b1888bb51fb4,
          mid_thenCombineAsync_02096c7839458ade,
          mid_thenCompose_e8363e35ebc56629,
          mid_thenComposeAsync_e8363e35ebc56629,
          mid_thenComposeAsync_6b61e01ae0801c28,
          mid_thenRun_7ffc960da9b87b9a,
          mid_thenRunAsync_7ffc960da9b87b9a,
          mid_thenRunAsync_329ca80600de3db5,
          mid_toCompletableFuture_67c044688e7780df,
          mid_toString_09a7afff1868fc5e,
          mid_whenComplete_bf1ae9aa718cbfc6,
          mid_whenCompleteAsync_bf1ae9aa718cbfc6,
          mid_whenCompleteAsync_f89e3c8346ef2c16,
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
