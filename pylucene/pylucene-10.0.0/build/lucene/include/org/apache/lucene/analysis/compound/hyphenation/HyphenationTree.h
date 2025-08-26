#ifndef org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H
#define org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H

#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"

namespace java {
  namespace util {
    class ArrayList;
  }
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
            class Hyphenation;
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

            class HyphenationTree : public ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_addClass_ee46a189998009d6,
                mid_addException_63b99db3d97c5637,
                mid_addPattern_0dd012a11c3f389b,
                mid_findPattern_fef9c036acf290a9,
                mid_hyphenate_6852c56e513f889b,
                mid_hyphenate_ead9dea7d7f09268,
                mid_printStats_922e82480ddcbcc4,
                mid_unpackValues_0da8f0b89b1e9a22,
                mid_hstrcmp_826b6903e83315ea,
                mid_searchPatterns_81a4ed1ec3101fd8,
                mid_packValues_fa2a6f298bd618ab,
                mid_getValues_d94c1f1d0c66928c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit HyphenationTree(jobject obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              HyphenationTree(const HyphenationTree& obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {}

              HyphenationTree();

              void addClass(const ::java::lang::String &) const;
              void addException(const ::java::lang::String &, const ::java::util::ArrayList &) const;
              void addPattern(const ::java::lang::String &, const ::java::lang::String &) const;
              ::java::lang::String findPattern(const ::java::lang::String &) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const ::java::lang::String &, jint, jint) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const JArray< jchar > &, jint, jint, jint, jint) const;
              void printStats(const ::java::io::PrintStream &) const;
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
            extern PyType_Def PY_TYPE_DEF(HyphenationTree);
            extern PyTypeObject *PY_TYPE(HyphenationTree);

            class t_HyphenationTree {
            public:
              PyObject_HEAD
              HyphenationTree object;
              static PyObject *wrap_Object(const HyphenationTree&);
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
