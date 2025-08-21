#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$PayloadType;
          class SpanPayloadCheckQuery;
        }
        namespace spans {
          class Spans;
          class SpanWeight$Postings;
        }
      }
      namespace index {
        class Term;
        class TermStates;
        class LeafReaderContext;
      }
      namespace search {
        class ScorerSupplier;
        class IndexSearcher;
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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class SpanPayloadCheckQuery$SpanPayloadCheckWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_fcf1767d804f4f81,
              mid_extractTermStates_79ba0f5a7d05e623,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              mid_scorerSupplier_45b7d9496c5acc93,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery$SpanPayloadCheckWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const SpanPayloadCheckQuery$SpanPayloadCheckWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$PayloadType &);

            void extractTermStates(const ::java::util::Map &) const;
            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery$SpanPayloadCheckWeight);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery$SpanPayloadCheckWeight);

          class t_SpanPayloadCheckQuery$SpanPayloadCheckWeight {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery$SpanPayloadCheckWeight object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$SpanPayloadCheckWeight&);
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
