#ifndef org_apache_lucene_queries_intervals_IntervalsSource_H
#define org_apache_lucene_queries_intervals_IntervalsSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalIterator;
          class IntervalMatchesIterator;
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
  namespace util {
    class Collection;
  }
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
      namespace queries {
        namespace intervals {

          class IntervalsSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_intervals_1bd3f71593e381ee,
              mid_matches_088afda15bab86d5,
              mid_minExtent_20fbf7565993c3d7,
              mid_pullUpDisjunctions_aa58b3beec16cbbd,
              mid_toString_09a7afff1868fc5e,
              mid_visit_c97c62e73c4b5880,
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
