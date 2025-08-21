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
              mid_init$_b4676990aef006cd,
              mid_equals_570b5248a6da3ef6,
              mid_getEnd_20fbf7565993c3d7,
              mid_getStart_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_cb0eb1432185fc94,
              mid_acceptPosition_b59c8c4cfb25644b,
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
