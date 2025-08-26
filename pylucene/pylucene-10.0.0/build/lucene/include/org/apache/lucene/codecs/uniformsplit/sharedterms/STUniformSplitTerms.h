#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTerms_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTerms_H

#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTerms.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STUniformSplitTerms : public ::org::apache::lucene::codecs::uniformsplit::UniformSplitTerms {
             public:
              enum {
                mid_intersect_1265e3f103794636,
                mid_iterator_c92e16ad45780176,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STUniformSplitTerms(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTerms(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STUniformSplitTerms(const STUniformSplitTerms& obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTerms(obj) {}

              ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
              ::org::apache::lucene::index::TermsEnum iterator() const;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STUniformSplitTerms);
            extern PyTypeObject *PY_TYPE(STUniformSplitTerms);

            class t_STUniformSplitTerms {
            public:
              PyObject_HEAD
              STUniformSplitTerms object;
              static PyObject *wrap_Object(const STUniformSplitTerms&);
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
