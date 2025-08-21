#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
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
      namespace codecs {
        namespace uniformsplit {

          class UniformSplitTerms : public ::org::apache::lucene::index::Terms {
           public:
            enum {
              mid_getDocCount_20fbf7565993c3d7,
              mid_getMax_9740fddd1c7df148,
              mid_getSumDocFreq_16939d9d0a9a9721,
              mid_getSumTotalTermFreq_16939d9d0a9a9721,
              mid_hasFreqs_947277eca0748c4e,
              mid_hasOffsets_947277eca0748c4e,
              mid_hasPayloads_947277eca0748c4e,
              mid_hasPositions_947277eca0748c4e,
              mid_intersect_ae180b89f91722b6,
              mid_iterator_8a12f41bbebee35e,
              mid_size_16939d9d0a9a9721,
              mid_checkIntersectAutomatonType_599f49d9ab380820,
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
