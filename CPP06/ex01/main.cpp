int main()
{
    Data* original(1, "Test", 42.42f);
    uintptr_t raw = Serializer::serialize(&original);
    Data* deserialize = Serializer::deserialize(raw);

    if (deserialize == &original)
        std::cout << "Test reussi" << std::endl;
    else
        std::cout <<  "Test raté" << std::endl;
    return 0;
}