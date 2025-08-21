#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            class FSTCompletion$Completion;
          }
        }
      }
      namespace util {
        namespace fst {
          class FST;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class FSTCompletion : public ::java::lang::Object {
             public:
              enum {
                mid_init$_d80c376272ec8dd6,
                mid_init$_424190897a2f937e,
                mid_getBucket_8e17890b160f6d76,
                mid_getBucketCount_20fbf7565993c3d7,
                mid_getFST_3fdd4cac6c744491,
                mid_lookup_6e3326279ac0811d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion(const FSTCompletion& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_BUCKETS;

              FSTCompletion(const ::org::apache::lucene::util::fst::FST &);
              FSTCompletion(const ::org::apache::lucene::util::fst::FST &, jboolean, jboolean);

              jint getBucket(const ::java::lang::CharSequence &) const;
              jint getBucketCount() const;
              ::org::apache::lucene::util::fst::FST getFST() const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(FSTCompletion);
            extern PyTypeObject *PY_TYPE(FSTCompletion);

            class t_FSTCompletion {
            public:
              PyObject_HEAD
              FSTCompletion object;
              static PyObject *wrap_Object(const FSTCompletion&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
