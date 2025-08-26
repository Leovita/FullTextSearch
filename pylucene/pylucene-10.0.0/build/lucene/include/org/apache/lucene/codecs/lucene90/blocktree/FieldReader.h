#ifndef org_apache_lucene_codecs_lucene90_blocktree_FieldReader_H
#define org_apache_lucene_codecs_lucene90_blocktree_FieldReader_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {
            class Stats;
          }
        }
      }
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
                mid_getDocCount_bd89ce15dad49192,
                mid_getMax_adbedbc1fa61c358,
                mid_getMin_adbedbc1fa61c358,
                mid_getStats_c60d7d36d6868091,
                mid_getSumDocFreq_0f176418e3e16541,
                mid_getSumTotalTermFreq_0f176418e3e16541,
                mid_hasFreqs_9aa4f33e82ea333f,
                mid_hasOffsets_9aa4f33e82ea333f,
                mid_hasPayloads_9aa4f33e82ea333f,
                mid_hasPositions_9aa4f33e82ea333f,
                mid_intersect_1265e3f103794636,
                mid_iterator_c92e16ad45780176,
                mid_size_0f176418e3e16541,
                mid_toString_e7df854526d67fa3,
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
