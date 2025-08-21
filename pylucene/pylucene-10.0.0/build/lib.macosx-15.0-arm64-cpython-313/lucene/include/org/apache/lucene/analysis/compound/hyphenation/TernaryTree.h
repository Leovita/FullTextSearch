#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
                mid_balance_3720c61b0679eb3e,
                mid_clone_488a9ad432f73713,
                mid_find_3f230d713d7fd2b0,
                mid_find_9a7f8b7fc7b277ea,
                mid_insert_2f4ccef78cebf8e8,
                mid_insert_beb82c17ff6529e7,
                mid_keys_a2a5e131c5f66817,
                mid_knows_4a13a663b5c11133,
                mid_printStats_f19a9aaf837ad692,
                mid_size_20fbf7565993c3d7,
                mid_strcmp_d8efb916c3f0b49d,
                mid_strcmp_29624e033af61e73,
                mid_strcpy_65abb54123aa1bab,
                mid_strlen_1d6980f6711df1e4,
                mid_strlen_9a7f8b7fc7b277ea,
                mid_trimToSize_3720c61b0679eb3e,
                mid_insertBalanced_90b2fcdcef4f2683,
                mid_init_3720c61b0679eb3e,
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
