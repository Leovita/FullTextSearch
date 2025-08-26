#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H

#include "java/lang/Record.h"

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
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldFragList$WeightedFragInfo$SubInfo : public ::java::lang::Record {
           public:
            enum {
              mid_init$_588baf4e971ba60f,
              mid_boost_8b62236f0e4d0dbc,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_seqnum_bd89ce15dad49192,
              mid_termsOffsets_1387e1e2702ac173,
              mid_text_e7df854526d67fa3,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList$WeightedFragInfo$SubInfo(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList$WeightedFragInfo$SubInfo(const FieldFragList$WeightedFragInfo$SubInfo& obj) : ::java::lang::Record(obj) {}

            FieldFragList$WeightedFragInfo$SubInfo(const ::java::lang::String &, const ::java::util::List &, jint, jfloat);

            jfloat boost() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jint seqnum() const;
            ::java::util::List termsOffsets() const;
            ::java::lang::String text() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList$WeightedFragInfo$SubInfo);
          extern PyTypeObject *PY_TYPE(FieldFragList$WeightedFragInfo$SubInfo);

          class t_FieldFragList$WeightedFragInfo$SubInfo {
          public:
            PyObject_HEAD
            FieldFragList$WeightedFragInfo$SubInfo object;
            static PyObject *wrap_Object(const FieldFragList$WeightedFragInfo$SubInfo&);
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
