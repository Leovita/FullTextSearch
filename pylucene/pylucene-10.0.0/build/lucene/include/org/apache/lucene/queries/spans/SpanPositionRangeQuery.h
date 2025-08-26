#ifndef org_apache_lucene_queries_spans_SpanPositionRangeQuery_H
#define org_apache_lucene_queries_spans_SpanPositionRangeQuery_H

#include "org/apache/lucene/queries/spans/SpanPositionCheckQuery.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanPositionRangeQuery : public ::org::apache::lucene::queries::spans::SpanPositionCheckQuery {
           public:
            enum {
              mid_init$_2ecddd01c7b7038e,
              mid_equals_00d17418847797d4,
              mid_getEnd_bd89ce15dad49192,
              mid_getStart_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_fef9c036acf290a9,
              mid_acceptPosition_ded8f9d8e47cc29a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionRangeQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionRangeQuery(const SpanPositionRangeQuery& obj) : ::org::apache::lucene::queries::spans::SpanPositionCheckQuery(obj) {}

            SpanPositionRangeQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getEnd() const;
            jint getStart() const;
            jint hashCode() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanPositionRangeQuery);
          extern PyTypeObject *PY_TYPE(SpanPositionRangeQuery);

          class t_SpanPositionRangeQuery {
          public:
            PyObject_HEAD
            SpanPositionRangeQuery object;
            static PyObject *wrap_Object(const SpanPositionRangeQuery&);
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
