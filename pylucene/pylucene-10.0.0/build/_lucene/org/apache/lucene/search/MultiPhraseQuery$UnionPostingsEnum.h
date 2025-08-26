#ifndef org_apache_lucene_search_MultiPhraseQuery$UnionPostingsEnum_H
#define org_apache_lucene_search_MultiPhraseQuery$UnionPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiPhraseQuery$UnionPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_init$_b5398b431eb321fb,
            mid_advance_a3904e10f5bb9437,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_endOffset_bd89ce15dad49192,
            mid_freq_bd89ce15dad49192,
            mid_getPayload_adbedbc1fa61c358,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextPosition_bd89ce15dad49192,
            mid_startOffset_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$UnionPostingsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$UnionPostingsEnum(const MultiPhraseQuery$UnionPostingsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}

          MultiPhraseQuery$UnionPostingsEnum(const ::java::util::Collection &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
          jint nextPosition() const;
          jint startOffset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$UnionPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$UnionPostingsEnum);

        class t_MultiPhraseQuery$UnionPostingsEnum {
        public:
          PyObject_HEAD
          MultiPhraseQuery$UnionPostingsEnum object;
          static PyObject *wrap_Object(const MultiPhraseQuery$UnionPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
