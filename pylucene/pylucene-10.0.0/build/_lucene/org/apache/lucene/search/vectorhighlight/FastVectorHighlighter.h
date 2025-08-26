#ifndef org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H
#define org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FragListBuilder;
          class FieldQuery;
          class FragmentsBuilder;
        }
        class Query;
        namespace highlight {
          class Encoder;
        }
      }
      namespace index {
        class IndexReader;
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
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FastVectorHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_625f7a21e54cb1c3,
              mid_init$_1ce72b06e2c0945d,
              mid_getBestFragment_8dbbdecd5971bbd8,
              mid_getBestFragment_cf35a906ec8295da,
              mid_getBestFragments_f516d316c2f634b2,
              mid_getBestFragments_bf4a78853641ba8e,
              mid_getBestFragments_357f614730dcc1ed,
              mid_getFieldQuery_db9e15bb006f10ef,
              mid_getFieldQuery_7f187e16b1621df0,
              mid_getPhraseLimit_bd89ce15dad49192,
              mid_isFieldMatch_9aa4f33e82ea333f,
              mid_isPhraseHighlight_9aa4f33e82ea333f,
              mid_setPhraseLimit_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastVectorHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastVectorHighlighter(const FastVectorHighlighter& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_FIELD_MATCH;
            static jboolean DEFAULT_PHRASE_HIGHLIGHT;

            FastVectorHighlighter();
            FastVectorHighlighter(jboolean, jboolean);
            FastVectorHighlighter(jboolean, jboolean, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Set &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &) const;
            jint getPhraseLimit() const;
            jboolean isFieldMatch() const;
            jboolean isPhraseHighlight() const;
            void setPhraseLimit(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FastVectorHighlighter);
          extern PyTypeObject *PY_TYPE(FastVectorHighlighter);

          class t_FastVectorHighlighter {
          public:
            PyObject_HEAD
            FastVectorHighlighter object;
            static PyObject *wrap_Object(const FastVectorHighlighter&);
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
