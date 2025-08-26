#ifndef org_apache_lucene_monitor_HighlightsMatch$Hit_H
#define org_apache_lucene_monitor_HighlightsMatch$Hit_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class HighlightsMatch$Hit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
    class Comparable;
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
            mid_init$_126b4efb1bebbe4a,
            mid_compareTo_32e4a45a53424091,
            mid_endOffset_bd89ce15dad49192,
            mid_endPosition_bd89ce15dad49192,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_startOffset_bd89ce15dad49192,
            mid_startPosition_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
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
