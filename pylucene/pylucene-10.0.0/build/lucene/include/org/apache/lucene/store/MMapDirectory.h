#ifndef org_apache_lucene_store_MMapDirectory_H
#define org_apache_lucene_store_MMapDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Optional;
    namespace function {
      class BiPredicate;
      class Function;
    }
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class LockFactory;
        class IndexInput;
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MMapDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_8a3244428bfc77b8,
            mid_init$_84a94904a0b471b0,
            mid_init$_1b06ef0210ba0aee,
            mid_init$_c4f45029e61d8d9d,
            mid_getMaxChunkSize_16939d9d0a9a9721,
            mid_openInput_f1f6511a018f52d0,
            mid_setGroupingFunction_01074abdfd8c2995,
            mid_setPreload_a062a4bba2294518,
            mid_supportsMadvise_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MMapDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MMapDirectory(const MMapDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          static ::java::util::function::BiPredicate *ALL_FILES;
          static ::java::util::function::BiPredicate *BASED_ON_LOAD_IO_CONTEXT;
          static jlong DEFAULT_MAX_CHUNK_SIZE;
          static ::java::util::function::Function *GROUP_BY_SEGMENT;
          static ::java::util::function::BiPredicate *NO_FILES;
          static ::java::util::function::Function *NO_GROUPING;
          static ::java::lang::String *SHARED_ARENA_MAX_PERMITS_SYSPROP;

          MMapDirectory(const ::java::nio::file::Path &);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          MMapDirectory(const ::java::nio::file::Path &, jlong);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &, jlong);

          jlong getMaxChunkSize() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setGroupingFunction(const ::java::util::function::Function &) const;
          void setPreload(const ::java::util::function::BiPredicate &) const;
          static jboolean supportsMadvise();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(MMapDirectory);
        extern PyTypeObject *PY_TYPE(MMapDirectory);

        class t_MMapDirectory {
        public:
          PyObject_HEAD
          MMapDirectory object;
          static PyObject *wrap_Object(const MMapDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
