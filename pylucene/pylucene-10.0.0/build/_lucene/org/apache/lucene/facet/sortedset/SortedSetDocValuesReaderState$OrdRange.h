#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$OrdRange_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$OrdRange_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
  namespace util {
    class PrimitiveIterator$OfInt;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState$OrdRange : public ::java::lang::Record {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_end_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_iterator_455faf74d08510a3,
              mid_start_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState$OrdRange(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState$OrdRange(const SortedSetDocValuesReaderState$OrdRange& obj) : ::java::lang::Record(obj) {}

            SortedSetDocValuesReaderState$OrdRange(jint, jint);

            jint end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::util::PrimitiveIterator$OfInt iterator() const;
            jint start() const;
            ::java::lang::String toString() const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState$OrdRange);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState$OrdRange);

          class t_SortedSetDocValuesReaderState$OrdRange {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState$OrdRange object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState$OrdRange&);
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
