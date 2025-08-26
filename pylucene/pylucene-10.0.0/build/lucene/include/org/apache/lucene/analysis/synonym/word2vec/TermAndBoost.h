#ifndef org_apache_lucene_analysis_synonym_word2vec_TermAndBoost_H
#define org_apache_lucene_analysis_synonym_word2vec_TermAndBoost_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {

            class TermAndBoost : public ::java::lang::Record {
             public:
              enum {
                mid_init$_344007ed00123f57,
                mid_boost_8b62236f0e4d0dbc,
                mid_equals_00d17418847797d4,
                mid_hashCode_bd89ce15dad49192,
                mid_term_adbedbc1fa61c358,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermAndBoost(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TermAndBoost(const TermAndBoost& obj) : ::java::lang::Record(obj) {}

              TermAndBoost(const ::org::apache::lucene::util::BytesRef &, jfloat);

              jfloat boost() const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              ::org::apache::lucene::util::BytesRef term() const;
              ::java::lang::String toString() const;
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
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            extern PyType_Def PY_TYPE_DEF(TermAndBoost);
            extern PyTypeObject *PY_TYPE(TermAndBoost);

            class t_TermAndBoost {
            public:
              PyObject_HEAD
              TermAndBoost object;
              static PyObject *wrap_Object(const TermAndBoost&);
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
