#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H

#include "org/apache/lucene/index/Terms.h"

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

          class UniformSplitTerms : public ::org::apache::lucene::index::Terms {
           public:
            enum {
              mid_getDocCount_bd89ce15dad49192,
              mid_getMax_adbedbc1fa61c358,
              mid_getSumDocFreq_0f176418e3e16541,
              mid_getSumTotalTermFreq_0f176418e3e16541,
              mid_hasFreqs_9aa4f33e82ea333f,
              mid_hasOffsets_9aa4f33e82ea333f,
              mid_hasPayloads_9aa4f33e82ea333f,
              mid_hasPositions_9aa4f33e82ea333f,
              mid_intersect_1265e3f103794636,
              mid_iterator_c92e16ad45780176,
              mid_size_0f176418e3e16541,
              mid_checkIntersectAutomatonType_12676143ebfc1187,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTerms(const UniformSplitTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

            jint getDocCount() const;
            ::org::apache::lucene::util::BytesRef getMax() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            jboolean hasFreqs() const;
            jboolean hasOffsets() const;
            jboolean hasPayloads() const;
            jboolean hasPositions() const;
            ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::index::TermsEnum iterator() const;
            jlong size() const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTerms);
          extern PyTypeObject *PY_TYPE(UniformSplitTerms);

          class t_UniformSplitTerms {
          public:
            PyObject_HEAD
            UniformSplitTerms object;
            static PyObject *wrap_Object(const UniformSplitTerms&);
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
