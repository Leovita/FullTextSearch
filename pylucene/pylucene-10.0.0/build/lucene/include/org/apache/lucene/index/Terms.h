#ifndef org_apache_lucene_index_Terms_H
#define org_apache_lucene_index_Terms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class Terms;
        class LeafReader;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Terms : public ::java::lang::Object {
         public:
          enum {
            mid_getDocCount_20fbf7565993c3d7,
            mid_getMax_9740fddd1c7df148,
            mid_getMin_9740fddd1c7df148,
            mid_getStats_5655ed8670534604,
            mid_getSumDocFreq_16939d9d0a9a9721,
            mid_getSumTotalTermFreq_16939d9d0a9a9721,
            mid_getTerms_f01fbe89af77f248,
            mid_hasFreqs_947277eca0748c4e,
            mid_hasOffsets_947277eca0748c4e,
            mid_hasPayloads_947277eca0748c4e,
            mid_hasPositions_947277eca0748c4e,
            mid_intersect_ae180b89f91722b6,
            mid_iterator_8a12f41bbebee35e,
            mid_size_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Terms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Terms(const Terms& obj) : ::java::lang::Object(obj) {}

          static JArray< Terms > *EMPTY_ARRAY;

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          static Terms getTerms(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Terms);
        extern PyTypeObject *PY_TYPE(Terms);

        class t_Terms {
        public:
          PyObject_HEAD
          Terms object;
          static PyObject *wrap_Object(const Terms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
