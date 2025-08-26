#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo$Toffs_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo$Toffs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldPhraseList$WeightedPhraseInfo$Toffs : public ::java::lang::Object {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_compareTo_a522533210428456,
              mid_equals_00d17418847797d4,
              mid_getEndOffset_bd89ce15dad49192,
              mid_getStartOffset_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_setEndOffset_8226bd0b0fc13dba,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo$Toffs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo$Toffs(const FieldPhraseList$WeightedPhraseInfo$Toffs& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo$Toffs(jint, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo$Toffs &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            jint getStartOffset() const;
            jint hashCode() const;
            void setEndOffset(jint) const;
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
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList$WeightedPhraseInfo$Toffs);
          extern PyTypeObject *PY_TYPE(FieldPhraseList$WeightedPhraseInfo$Toffs);

          class t_FieldPhraseList$WeightedPhraseInfo$Toffs {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo$Toffs object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo$Toffs&);
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
