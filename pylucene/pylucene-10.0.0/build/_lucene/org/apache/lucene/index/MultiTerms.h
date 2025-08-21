#ifndef org_apache_lucene_index_MultiTerms_H
#define org_apache_lucene_index_MultiTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class IndexReader;
        class ReaderSlice;
        class PostingsEnum;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
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
      namespace index {

        class MultiTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_init$_9785f29e771b4ff2,
            mid_getDocCount_20fbf7565993c3d7,
            mid_getMax_9740fddd1c7df148,
            mid_getMin_9740fddd1c7df148,
            mid_getSubSlices_884dc492b30b6119,
            mid_getSubTerms_6dbb3ec16a4932d2,
            mid_getSumDocFreq_16939d9d0a9a9721,
            mid_getSumTotalTermFreq_16939d9d0a9a9721,
            mid_getTermPostingsEnum_2f10b4bda9edf761,
            mid_getTermPostingsEnum_1fc2c5ae058446c9,
            mid_getTerms_79b880eb6af0149b,
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
