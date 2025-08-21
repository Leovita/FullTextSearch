#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class List;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldFragList$WeightedFragInfo$SubInfo : public ::java::lang::Record {
           public:
            enum {
              mid_init$_7e5d23cd8d5d4582,
              mid_boost_9b6c3480dac00edf,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_seqnum_20fbf7565993c3d7,
              mid_termsOffsets_36830460e10839eb,
              mid_text_09a7afff1868fc5e,
              mid_toString_09a7afff1868fc5e,
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
