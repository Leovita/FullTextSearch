#ifndef org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H
#define org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H

#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class ArrayList;
  }
  namespace io {
    class PrintStream;
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
                mid_init$_3720c61b0679eb3e,
                mid_addClass_0d82408c6e55bc30,
                mid_addException_b54ed4e18591173a,
                mid_addPattern_3d104da0b5c75e64,
                mid_findPattern_cb0eb1432185fc94,
                mid_hyphenate_8a3f2a2a3e629f38,
                mid_hyphenate_32e54eaf10e77051,
                mid_printStats_f19a9aaf837ad692,
                mid_packValues_3f230d713d7fd2b0,
                mid_unpackValues_cd8436557ab831f9,
                mid_hstrcmp_29624e033af61e73,
                mid_searchPatterns_bc88d8f78c7b8f19,
                mid_getValues_81e4ab9dd381561f,
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
