#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
          class FieldTermStack$TermInfo;
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
  namespace util {
    class Collection;
    class LinkedList;
    class List;
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
              mid_init$_b5398b431eb321fb,
              mid_init$_b1f01c8252976973,
              mid_init$_30ce6c56607f14c3,
              mid_compareTo_4041bbbf06699981,
              mid_equals_00d17418847797d4,
              mid_getBoost_8b62236f0e4d0dbc,
              mid_getEndOffset_bd89ce15dad49192,
              mid_getSeqnum_bd89ce15dad49192,
              mid_getStartOffset_bd89ce15dad49192,
              mid_getTermsInfos_1387e1e2702ac173,
              mid_getTermsOffsets_1387e1e2702ac173,
              mid_getText_e7df854526d67fa3,
              mid_hashCode_bd89ce15dad49192,
              mid_isOffsetOverlap_0260e0ee34ec192a,
              mid_toString_e7df854526d67fa3,
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
