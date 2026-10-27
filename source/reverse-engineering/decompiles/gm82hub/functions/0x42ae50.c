// rea decompile_all
// name: FUN_0042ae50
// address: 0x42ae50
// body: available
// range: 0x42ae50-0x42aec0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042ae50(undefined4 param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_17f8 [1526];
  int *local_20;
  uint local_1c;
  uint auStack_18 [3];

  bVar5 = 0;
  puVar2 = (uint *)thunk_FUN_0042ae45(param_1);
  puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
  local_1c = *puVar2;
  auStack_18[(uint)bVar5 * -2] = *puVar4;
  auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
  (auStack_18 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if ((ushort)local_1c < 0x10f) {
    if (((ushort)local_1c != 0) &&
       ((((ushort)local_1c != 9 && ((ushort)local_1c != 0xd)) || (auStack_18[1] != 0)))) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    cVar1 = FUN_0042b560(local_1c & 0xffff,&local_20);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*local_20 + 0x14))(local_20,&local_1c);
    }
  }
  return uVar3;
}
