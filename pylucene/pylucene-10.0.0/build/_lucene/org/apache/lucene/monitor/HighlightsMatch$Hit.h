#ifndef org_apache_lucene_monitor_HighlightsMatch$Hit_H
#define org_apache_lucene_monitor_HighlightsMatch$Hit_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class HighlightsMatch$Hit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class HighlightsMatch$Hit : public ::java::lang::Record {
         public:
          enum {
            mid_init$_94688dd632556392,
            mid_compareTo_b760533b85656009,
            mid_endOffset_20fbf7565993c3d7,
            mid_endPosition_20fbf7565993c3d7,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_startOffset_20fbf7565993c3d7,
            mid_startPosition_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighlightsMatch$Hit(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighlightsMatch$Hit(const HighlightsMatch$Hit& obj) : ::java::lang::Record(obj) {}

          HighlightsMatch$Hit(jint, jint, jint, jint);

          jint compareTo(const HighlightsMatch$Hit &) const;
          jint endOffset() const;
          jint endPosition() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jint startOffset() const;
          jint startPosition() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(HighlightsMatch$Hit);
        extern PyTypeObject *PY_TYPE(HighlightsMatch$Hit);

        class t_HighlightsMatch$Hit {
        public:
          PyObject_HEAD
          HighlightsMatch$Hit object;
          static PyObject *wrap_Object(const HighlightsMatch$Hit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
