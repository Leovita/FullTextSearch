#ifndef org_apache_lucene_queries_intervals_IntervalsSource_H
#define org_apache_lucene_queries_intervals_IntervalsSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalMatchesIterator;
          class IntervalIterator;
          class IntervalsSource;
        }
      }
      namespace search {
        class QueryVisitor;
      }
      namespace index {
        class LeafReaderContext;
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
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class IntervalsSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_intervals_ace1dbcddaadc96d,
              mid_matches_10d72833c4e0c293,
              mid_minExtent_bd89ce15dad49192,
              mid_pullUpDisjunctions_4a269b968b3a511f,
              mid_toString_e7df854526d67fa3,
              mid_visit_5f02824c31e51cfd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalsSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalsSource(const IntervalsSource& obj) : ::java::lang::Object(obj) {}

            IntervalsSource();

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            jint minExtent() const;
            ::java::util::Collection pullUpDisjunctions() const;
            ::java::lang::String toString() const;
            void visit(const ::java::lang::String &, const ::org::apache::lucene::search::QueryVisitor &) const;
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
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalsSource);
          extern PyTypeObject *PY_TYPE(IntervalsSource);

          class t_IntervalsSource {
          public:
            PyObject_HEAD
            IntervalsSource object;
            static PyObject *wrap_Object(const IntervalsSource&);
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
