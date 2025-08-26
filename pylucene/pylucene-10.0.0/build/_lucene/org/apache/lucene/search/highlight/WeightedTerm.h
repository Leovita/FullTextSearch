#ifndef org_apache_lucene_search_highlight_WeightedTerm_H
#define org_apache_lucene_search_highlight_WeightedTerm_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedTerm : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0ecabbb1d6a25118,
              mid_getTerm_e7df854526d67fa3,
              mid_getWeight_8b62236f0e4d0dbc,
              mid_setTerm_ee46a189998009d6,
              mid_setWeight_675f4cb9a2529ee0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedTerm(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedTerm(const WeightedTerm& obj) : ::java::lang::Object(obj) {}

            WeightedTerm(jfloat, const ::java::lang::String &);

            ::java::lang::String getTerm() const;
            jfloat getWeight() const;
            void setTerm(const ::java::lang::String &) const;
            void setWeight(jfloat) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(WeightedTerm);
          extern PyTypeObject *PY_TYPE(WeightedTerm);

          class t_WeightedTerm {
          public:
            PyObject_HEAD
            WeightedTerm object;
            static PyObject *wrap_Object(const WeightedTerm&);
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
