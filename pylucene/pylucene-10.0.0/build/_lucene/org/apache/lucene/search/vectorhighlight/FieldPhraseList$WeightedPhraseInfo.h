#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    class LinkedList;
    class Collection;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldTermStack$TermInfo;
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

          class FieldPhraseList$WeightedPhraseInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_40eba2cff967cc45,
              mid_init$_343863c57677a758,
              mid_init$_474bb29b8d514263,
              mid_compareTo_0a2b1425c538db16,
              mid_equals_570b5248a6da3ef6,
              mid_getBoost_9b6c3480dac00edf,
              mid_getEndOffset_20fbf7565993c3d7,
              mid_getSeqnum_20fbf7565993c3d7,
              mid_getStartOffset_20fbf7565993c3d7,
              mid_getTermsInfos_36830460e10839eb,
              mid_getTermsOffsets_36830460e10839eb,
              mid_getText_09a7afff1868fc5e,
              mid_hashCode_20fbf7565993c3d7,
              mid_isOffsetOverlap_c982dfae987751f9,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo(const FieldPhraseList$WeightedPhraseInfo& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo(const ::java::util::Collection &);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jfloat getBoost() const;
            jint getEndOffset() const;
            jint getSeqnum() const;
            jint getStartOffset() const;
            ::java::util::List getTermsInfos() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
            jint hashCode() const;
            jboolean isOffsetOverlap(const FieldPhraseList$WeightedPhraseInfo &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList$WeightedPhraseInfo);
          extern PyTypeObject *PY_TYPE(FieldPhraseList$WeightedPhraseInfo);

          class t_FieldPhraseList$WeightedPhraseInfo {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo&);
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
