#ifndef org_apache_lucene_index_Terms_H
#define org_apache_lucene_index_Terms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class TermsEnum;
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
      namespace index {

        class Terms : public ::java::lang::Object {
         public:
          enum {
            mid_getDocCount_bd89ce15dad49192,
            mid_getMax_adbedbc1fa61c358,
            mid_getMin_adbedbc1fa61c358,
            mid_getStats_4819806f62f1360a,
            mid_getSumDocFreq_0f176418e3e16541,
            mid_getSumTotalTermFreq_0f176418e3e16541,
            mid_getTerms_55fd7bd4a253d8ef,
            mid_hasFreqs_9aa4f33e82ea333f,
            mid_hasOffsets_9aa4f33e82ea333f,
            mid_hasPayloads_9aa4f33e82ea333f,
            mid_hasPositions_9aa4f33e82ea333f,
            mid_intersect_1265e3f103794636,
            mid_iterator_c92e16ad45780176,
            mid_size_0f176418e3e16541,
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
