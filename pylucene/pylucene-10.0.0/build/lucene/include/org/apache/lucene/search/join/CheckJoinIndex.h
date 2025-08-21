#ifndef org_apache_lucene_search_join_CheckJoinIndex_H
#define org_apache_lucene_search_join_CheckJoinIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          class BitSetProducer;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class CheckJoinIndex : public ::java::lang::Object {
           public:
            enum {
              mid_check_352ab623c920ae04,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CheckJoinIndex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CheckJoinIndex(const CheckJoinIndex& obj) : ::java::lang::Object(obj) {}

            static void check(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::join::BitSetProducer &);
          };
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(CheckJoinIndex);
          extern PyTypeObject *PY_TYPE(CheckJoinIndex);

          class t_CheckJoinIndex {
          public:
            PyObject_HEAD
            CheckJoinIndex object;
            static PyObject *wrap_Object(const CheckJoinIndex&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
