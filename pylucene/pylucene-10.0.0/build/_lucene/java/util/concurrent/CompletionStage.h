#ifndef java_util_concurrent_CompletionStage_H
#define java_util_concurrent_CompletionStage_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class Function;
      class BiConsumer;
      class Consumer;
    }
    namespace concurrent {
      class CompletableFuture;
      class CompletionStage;
      class Executor;
    }
  }
  namespace lang {
    class Runnable;
    class Class;
    class Void;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class CompletionStage : public ::java::lang::Object {
       public:
        enum {
          mid_acceptEither_09f1f29940fb5e8e,
          mid_acceptEitherAsync_09f1f29940fb5e8e,
          mid_acceptEitherAsync_29734c3f5c4febeb,
          mid_applyToEither_b69241c4bfb79a76,
          mid_applyToEitherAsync_b69241c4bfb79a76,
          mid_applyToEitherAsync_a2325c8a8d2c95e5,
          mid_exceptionally_86be1e75fcd992ca,
          mid_exceptionallyAsync_86be1e75fcd992ca,
          mid_exceptionallyAsync_7157f63447e7c53e,
          mid_exceptionallyCompose_86be1e75fcd992ca,
          mid_exceptionallyComposeAsync_86be1e75fcd992ca,
          mid_exceptionallyComposeAsync_7157f63447e7c53e,
          mid_handle_de2b6d99c912589b,
          mid_handleAsync_de2b6d99c912589b,
          mid_handleAsync_defa5e9091bc2bd5,
          mid_runAfterBoth_e1635c10abb2eb1e,
          mid_runAfterBothAsync_e1635c10abb2eb1e,
          mid_runAfterBothAsync_8acb42dc0398693e,
          mid_runAfterEither_e1635c10abb2eb1e,
          mid_runAfterEitherAsync_e1635c10abb2eb1e,
          mid_runAfterEitherAsync_8acb42dc0398693e,
          mid_thenAccept_6fb1a390dca0c248,
          mid_thenAcceptAsync_6fb1a390dca0c248,
          mid_thenAcceptAsync_4771cd1664c47170,
          mid_thenAcceptBoth_3a69ef4ae360ee99,
          mid_thenAcceptBothAsync_3a69ef4ae360ee99,
          mid_thenAcceptBothAsync_ac0ceb85acb410e1,
          mid_thenApply_86be1e75fcd992ca,
          mid_thenApplyAsync_86be1e75fcd992ca,
          mid_thenApplyAsync_7157f63447e7c53e,
          mid_thenCombine_09ff46abdeee70a9,
          mid_thenCombineAsync_09ff46abdeee70a9,
          mid_thenCombineAsync_8704066d85069f7b,
          mid_thenCompose_86be1e75fcd992ca,
          mid_thenComposeAsync_86be1e75fcd992ca,
          mid_thenComposeAsync_7157f63447e7c53e,
          mid_thenRun_a5abdacf48f6c04d,
          mid_thenRunAsync_a5abdacf48f6c04d,
          mid_thenRunAsync_e30a1c552ccb2e07,
          mid_toCompletableFuture_645e0257444d1f5e,
          mid_whenComplete_56c447c66e07ee0f,
          mid_whenCompleteAsync_56c447c66e07ee0f,
          mid_whenCompleteAsync_0b5da3424694f86d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompletionStage(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompletionStage(const CompletionStage& obj) : ::java::lang::Object(obj) {}

        CompletionStage acceptEither(const CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletionStage acceptEitherAsync(const CompletionStage &, const ::java::util::function::Consumer &) const;
        CompletionStage acceptEitherAsync(const CompletionStage &, const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage applyToEither(const CompletionStage &, const ::java::util::function::Function &) const;
        CompletionStage applyToEitherAsync(const CompletionStage &, const ::java::util::function::Function &) const;
        CompletionStage applyToEitherAsync(const CompletionStage &, const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage exceptionally(const ::java::util::function::Function &) const;
        CompletionStage exceptionallyAsync(const ::java::util::function::Function &) const;
        CompletionStage exceptionallyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage exceptionallyCompose(const ::java::util::function::Function &) const;
        CompletionStage exceptionallyComposeAsync(const ::java::util::function::Function &) const;
        CompletionStage exceptionallyComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage handle(const ::java::util::function::BiFunction &) const;
        CompletionStage handleAsync(const ::java::util::function::BiFunction &) const;
        CompletionStage handleAsync(const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletionStage runAfterBoth(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterBothAsync(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterBothAsync(const CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletionStage runAfterEither(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterEitherAsync(const CompletionStage &, const ::java::lang::Runnable &) const;
        CompletionStage runAfterEitherAsync(const CompletionStage &, const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenAccept(const ::java::util::function::Consumer &) const;
        CompletionStage thenAcceptAsync(const ::java::util::function::Consumer &) const;
        CompletionStage thenAcceptAsync(const ::java::util::function::Consumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenAcceptBoth(const CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletionStage thenAcceptBothAsync(const CompletionStage &, const ::java::util::function::BiConsumer &) const;
        CompletionStage thenAcceptBothAsync(const CompletionStage &, const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenApply(const ::java::util::function::Function &) const;
        CompletionStage thenApplyAsync(const ::java::util::function::Function &) const;
        CompletionStage thenApplyAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenCombine(const CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletionStage thenCombineAsync(const CompletionStage &, const ::java::util::function::BiFunction &) const;
        CompletionStage thenCombineAsync(const CompletionStage &, const ::java::util::function::BiFunction &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenCompose(const ::java::util::function::Function &) const;
        CompletionStage thenComposeAsync(const ::java::util::function::Function &) const;
        CompletionStage thenComposeAsync(const ::java::util::function::Function &, const ::java::util::concurrent::Executor &) const;
        CompletionStage thenRun(const ::java::lang::Runnable &) const;
        CompletionStage thenRunAsync(const ::java::lang::Runnable &) const;
        CompletionStage thenRunAsync(const ::java::lang::Runnable &, const ::java::util::concurrent::Executor &) const;
        ::java::util::concurrent::CompletableFuture toCompletableFuture() const;
        CompletionStage whenComplete(const ::java::util::function::BiConsumer &) const;
        CompletionStage whenCompleteAsync(const ::java::util::function::BiConsumer &) const;
        CompletionStage whenCompleteAsync(const ::java::util::function::BiConsumer &, const ::java::util::concurrent::Executor &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(CompletionStage);
      extern PyTypeObject *PY_TYPE(CompletionStage);

      class t_CompletionStage {
      public:
        PyObject_HEAD
        CompletionStage object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CompletionStage *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CompletionStage&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CompletionStage&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
