#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace io {
    class Writer;
    class Reader;
    class PrintStream;
    class InputStream;
    class OutputStream;
    class IOException;
    class PrintWriter;
  }
  namespace util {
    namespace function {
      class BiConsumer;
      class BiFunction;
      class Function;
    }
    class Collection;
    class Map$Entry;
    class Enumeration;
    class Set;
    class InvalidPropertiesFormatException;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Properties : public ::java::util::Hashtable {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_clear_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_compute_222cc87f320503e9,
        mid_computeIfAbsent_54da8c192341bae7,
        mid_computeIfPresent_222cc87f320503e9,
        mid_contains_570b5248a6da3ef6,
        mid_containsKey_570b5248a6da3ef6,
        mid_containsValue_570b5248a6da3ef6,
        mid_elements_a2a5e131c5f66817,
        mid_entrySet_4df174295554d7bd,
        mid_equals_570b5248a6da3ef6,
        mid_forEach_b72e978f1e58c9c6,
        mid_get_5fd81664d2d475e1,
        mid_getOrDefault_243089e4ee289db6,
        mid_getProperty_cb0eb1432185fc94,
        mid_getProperty_6829292399b85216,
        mid_hashCode_20fbf7565993c3d7,
        mid_isEmpty_947277eca0748c4e,
        mid_keySet_4df174295554d7bd,
        mid_keys_a2a5e131c5f66817,
        mid_list_f19a9aaf837ad692,
        mid_list_f7c1942f5b4484ef,
        mid_load_37e23ef4361d4c28,
        mid_load_fa55492f0f5d7f31,
        mid_loadFromXML_37e23ef4361d4c28,
        mid_merge_18f34770301774a8,
        mid_propertyNames_a2a5e131c5f66817,
        mid_put_243089e4ee289db6,
        mid_putAll_79ba0f5a7d05e623,
        mid_putIfAbsent_243089e4ee289db6,
        mid_remove_5fd81664d2d475e1,
        mid_remove_6810d3c479f60a43,
        mid_replace_243089e4ee289db6,
        mid_replace_681a33cfaf020676,
        mid_replaceAll_e62f673264196dae,
        mid_save_e799617583d72fe5,
        mid_setProperty_fb511a2c917868ea,
        mid_size_20fbf7565993c3d7,
        mid_store_e799617583d72fe5,
        mid_store_ed83344a1f89fe7b,
        mid_storeToXML_e799617583d72fe5,
        mid_storeToXML_d6680f737146700b,
        mid_stringPropertyNames_4df174295554d7bd,
        mid_toString_09a7afff1868fc5e,
        mid_values_aa58b3beec16cbbd,
        mid_rehash_3720c61b0679eb3e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Properties(jobject obj) : ::java::util::Hashtable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Properties(const Properties& obj) : ::java::util::Hashtable(obj) {}

      Properties();
      Properties(jint);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::String getProperty(const ::java::lang::String &) const;
      ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      void list(const ::java::io::PrintStream &) const;
      void list(const ::java::io::PrintWriter &) const;
      void load(const ::java::io::InputStream &) const;
      void load(const ::java::io::Reader &) const;
      void loadFromXML(const ::java::io::InputStream &) const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::util::Enumeration propertyNames() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      void save(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      ::java::lang::Object setProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint size() const;
      void store(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void store(const ::java::io::Writer &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &, const ::java::lang::String &) const;
      ::java::util::Set stringPropertyNames() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Properties);
    extern PyTypeObject *PY_TYPE(Properties);

    class t_Properties {
    public:
      PyObject_HEAD
      Properties object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Properties *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Properties&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Properties&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
