#ifndef java_util_concurrent_CompletionStage_H
#define java_util_concurrent_CompletionStage_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Consumer;
      class BiFunction;
      class BiConsumer;
      class Function;
    }
    namespace concurrent {
      class CompletionStage;
      class CompletableFuture;
      class Executor;
    }
  }
  namespace lang {
    class Class;
    class Runnable;
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
          mid_acceptEither_70c417c0faaf4598,
          mid_acceptEitherAsync_70c417c0faaf4598,
          mid_acceptEitherAsync_9b5bdf58c2c02074,
          mid_applyToEither_1ab1cffe7f1f7dab,
          mid_applyToEitherAsync_1ab1cffe7f1f7dab,
          mid_applyToEitherAsync_f455df2f1305ab43,
          mid_exceptionally_8d6f7e61e17d3f6d,
          mid_exceptionallyAsync_8d6f7e61e17d3f6d,
          mid_exceptionallyAsync_a61822ed03a52f7f,
          mid_exceptionallyCompose_8d6f7e61e17d3f6d,
          mid_exceptionallyComposeAsync_8d6f7e61e17d3f6d,
          mid_exceptionallyComposeAsync_a61822ed03a52f7f,
          mid_handle_f0570b96a612cca1,
          mid_handleAsync_f0570b96a612cca1,
          mid_handleAsync_073c71704105e00b,
          mid_runAfterBoth_59ecd927df0749e6,
          mid_runAfterBothAsync_59ecd927df0749e6,
          mid_runAfterBothAsync_201b4e93c3747d88,
          mid_runAfterEither_59ecd927df0749e6,
          mid_runAfterEitherAsync_59ecd927df0749e6,
          mid_runAfterEitherAsync_201b4e93c3747d88,
          mid_thenAccept_23e2d4f1113a0298,
          mid_thenAcceptAsync_23e2d4f1113a0298,
          mid_thenAcceptAsync_cfad9c5b51d6eba2,
          mid_thenAcceptBoth_bfe59fe74a3234ee,
          mid_thenAcceptBothAsync_bfe59fe74a3234ee,
          mid_thenAcceptBothAsync_d4e195ae32bfc1f0,
          mid_thenApply_8d6f7e61e17d3f6d,
          mid_thenApplyAsync_8d6f7e61e17d3f6d,
          mid_thenApplyAsync_a61822ed03a52f7f,
          mid_thenCombine_78c74e43f43e08fa,
          mid_thenCombineAsync_78c74e43f43e08fa,
          mid_thenCombineAsync_f67d8a1fd0dc508f,
          mid_thenCompose_8d6f7e61e17d3f6d,
          mid_thenComposeAsync_8d6f7e61e17d3f6d,
          mid_thenComposeAsync_a61822ed03a52f7f,
          mid_thenRun_5a87c88bf99df1db,
          mid_thenRunAsync_5a87c88bf99df1db,
          mid_thenRunAsync_7a3a2f313f36946e,
          mid_toCompletableFuture_67c044688e7780df,
          mid_whenComplete_2b245a0dce7a704c,
          mid_whenCompleteAsync_2b245a0dce7a704c,
          mid_whenCompleteAsync_e6919763cd2ee0ec,
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
