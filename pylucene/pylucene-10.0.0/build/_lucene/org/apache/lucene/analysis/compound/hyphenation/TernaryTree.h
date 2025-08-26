#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
  }
  namespace util {
    class Enumeration;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class TernaryTree;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class TernaryTree : public ::java::lang::Object {
             public:
              enum {
                mid_balance_e7bdbe105ce1bafb,
                mid_clone_36c334d1a4d3cec7,
                mid_find_fa2a6f298bd618ab,
                mid_find_7146aefdd22b4b29,
                mid_insert_8313299958c6bf15,
                mid_insert_0ecaa5d73811e39f,
                mid_keys_c0dcea0e1246b77b,
                mid_knows_94f7e759d94961b0,
                mid_printStats_922e82480ddcbcc4,
                mid_size_bd89ce15dad49192,
                mid_strcmp_2e4026490b647e02,
                mid_strcmp_826b6903e83315ea,
                mid_strcpy_0e39000fd3c14a8d,
                mid_strlen_b5302190531968fe,
                mid_strlen_7146aefdd22b4b29,
                mid_trimToSize_e7bdbe105ce1bafb,
                mid_insertBalanced_18ce85e8ce4d68fb,
                mid_init_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree(const TernaryTree& obj) : ::java::lang::Object(obj) {}

              void balance() const;
              TernaryTree clone() const;
              jint find(const ::java::lang::String &) const;
              jint find(const JArray< jchar > &, jint) const;
              void insert(const ::java::lang::String &, jchar) const;
              void insert(const JArray< jchar > &, jint, jchar) const;
              ::java::util::Enumeration keys() const;
              jboolean knows(const ::java::lang::String &) const;
              void printStats(const ::java::io::PrintStream &) const;
              jint size() const;
              static jint strcmp(const ::java::lang::String &, const JArray< jchar > &, jint);
              static jint strcmp(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static void strcpy(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static jint strlen(const JArray< jchar > &);
              static jint strlen(const JArray< jchar > &, jint);
              void trimToSize() const;
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
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(TernaryTree);
            extern PyTypeObject *PY_TYPE(TernaryTree);

            class t_TernaryTree {
            public:
              PyObject_HEAD
              TernaryTree object;
              static PyObject *wrap_Object(const TernaryTree&);
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
