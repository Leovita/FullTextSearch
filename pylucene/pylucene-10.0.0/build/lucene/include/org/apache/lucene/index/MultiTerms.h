#ifndef org_apache_lucene_index_MultiTerms_H
#define org_apache_lucene_index_MultiTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class PostingsEnum;
        class TermsEnum;
        class ReaderSlice;
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

        class MultiTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_init$_022ff2bc159439a7,
            mid_getDocCount_bd89ce15dad49192,
            mid_getMax_adbedbc1fa61c358,
            mid_getMin_adbedbc1fa61c358,
            mid_getSubSlices_09ee992dbe798521,
            mid_getSubTerms_959ee968f26cc623,
            mid_getSumDocFreq_0f176418e3e16541,
            mid_getSumTotalTermFreq_0f176418e3e16541,
            mid_getTermPostingsEnum_ff1a354145b66181,
            mid_getTermPostingsEnum_3b84f966c0e9da3d,
            mid_getTerms_30b083a83e5c78c1,
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

          explicit MultiTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTerms(const MultiTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          MultiTerms(const JArray< ::org::apache::lucene::index::Terms > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          JArray< ::org::apache::lucene::index::ReaderSlice > getSubSlices() const;
          JArray< ::org::apache::lucene::index::Terms > getSubTerms() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          static ::org::apache::lucene::index::Terms getTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(MultiTerms);
        extern PyTypeObject *PY_TYPE(MultiTerms);

        class t_MultiTerms {
        public:
          PyObject_HEAD
          MultiTerms object;
          static PyObject *wrap_Object(const MultiTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
