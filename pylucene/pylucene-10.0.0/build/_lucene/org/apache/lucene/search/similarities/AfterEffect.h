#ifndef org_apache_lucene_search_similarities_AfterEffect_H
#define org_apache_lucene_search_similarities_AfterEffect_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class AfterEffect : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_explain_8995dc78166b1745,
              mid_scoreTimes1pTfn_ea85b076e18a02e2,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AfterEffect(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AfterEffect(const AfterEffect& obj) : ::java::lang::Object(obj) {}

            AfterEffect();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble) const;
            jdouble scoreTimes1pTfn(const ::org::apache::lucene::search::similarities::BasicStats &) const;
            ::java::lang::String toString() const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(AfterEffect);
          extern PyTypeObject *PY_TYPE(AfterEffect);

          class t_AfterEffect {
          public:
            PyObject_HEAD
            AfterEffect object;
            static PyObject *wrap_Object(const AfterEffect&);
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
