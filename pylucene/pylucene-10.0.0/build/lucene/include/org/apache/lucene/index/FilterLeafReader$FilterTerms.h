#ifndef org_apache_lucene_index_FilterLeafReader$FilterTerms_H
#define org_apache_lucene_index_FilterLeafReader$FilterTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace index {

        class FilterLeafReader$FilterTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_getDocCount_20fbf7565993c3d7,
            mid_getStats_5655ed8670534604,
            mid_getSumDocFreq_16939d9d0a9a9721,
            mid_getSumTotalTermFreq_16939d9d0a9a9721,
            mid_hasFreqs_947277eca0748c4e,
            mid_hasOffsets_947277eca0748c4e,
            mid_hasPayloads_947277eca0748c4e,
            mid_hasPositions_947277eca0748c4e,
            mid_iterator_8a12f41bbebee35e,
            mid_size_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader$FilterTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader$FilterTerms(const FilterLeafReader$FilterTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          jint getDocCount() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader$FilterTerms);
        extern PyTypeObject *PY_TYPE(FilterLeafReader$FilterTerms);

        class t_FilterLeafReader$FilterTerms {
        public:
          PyObject_HEAD
          FilterLeafReader$FilterTerms object;
          static PyObject *wrap_Object(const FilterLeafReader$FilterTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
