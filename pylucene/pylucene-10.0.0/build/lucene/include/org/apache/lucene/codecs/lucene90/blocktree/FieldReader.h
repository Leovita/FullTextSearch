#ifndef org_apache_lucene_codecs_lucene90_blocktree_FieldReader_H
#define org_apache_lucene_codecs_lucene90_blocktree_FieldReader_H

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
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {
            class Stats;
          }
        }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {

            class FieldReader : public ::org::apache::lucene::index::Terms {
             public:
              enum {
                mid_getDocCount_20fbf7565993c3d7,
                mid_getMax_9740fddd1c7df148,
                mid_getMin_9740fddd1c7df148,
                mid_getStats_685a99e112f5a1e8,
                mid_getSumDocFreq_16939d9d0a9a9721,
                mid_getSumTotalTermFreq_16939d9d0a9a9721,
                mid_hasFreqs_947277eca0748c4e,
                mid_hasOffsets_947277eca0748c4e,
                mid_hasPayloads_947277eca0748c4e,
                mid_hasPositions_947277eca0748c4e,
                mid_intersect_ae180b89f91722b6,
                mid_iterator_8a12f41bbebee35e,
                mid_size_16939d9d0a9a9721,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldReader(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldReader(const FieldReader& obj) : ::org::apache::lucene::index::Terms(obj) {}

              jint getDocCount() const;
              ::org::apache::lucene::util::BytesRef getMax() const;
              ::org::apache::lucene::util::BytesRef getMin() const;
              ::org::apache::lucene::codecs::lucene90::blocktree::Stats getStats() const;
              jlong getSumDocFreq() const;
              jlong getSumTotalTermFreq() const;
              jboolean hasFreqs() const;
              jboolean hasOffsets() const;
              jboolean hasPayloads() const;
              jboolean hasPositions() const;
              ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
              ::org::apache::lucene::index::TermsEnum iterator() const;
              jlong size() const;
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
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {
            extern PyType_Def PY_TYPE_DEF(FieldReader);
            extern PyTypeObject *PY_TYPE(FieldReader);

            class t_FieldReader {
            public:
              PyObject_HEAD
              FieldReader object;
              static PyObject *wrap_Object(const FieldReader&);
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
