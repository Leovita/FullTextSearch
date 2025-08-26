#ifndef org_apache_lucene_index_FilterLeafReader$FilterTerms_H
#define org_apache_lucene_index_FilterLeafReader$FilterTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Object;
    class Class;
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
            mid_getDocCount_bd89ce15dad49192,
            mid_getStats_4819806f62f1360a,
            mid_getSumDocFreq_0f176418e3e16541,
            mid_getSumTotalTermFreq_0f176418e3e16541,
            mid_hasFreqs_9aa4f33e82ea333f,
            mid_hasOffsets_9aa4f33e82ea333f,
            mid_hasPayloads_9aa4f33e82ea333f,
            mid_hasPositions_9aa4f33e82ea333f,
            mid_iterator_c92e16ad45780176,
            mid_size_0f176418e3e16541,
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
