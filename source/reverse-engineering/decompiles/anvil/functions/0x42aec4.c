// rea decompile_all
// name: FUN_0042aec4
// address: 0x42aec4
// body: available
// range: 0x42aec4-0x42af3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0042aec4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 auStack_1808 [1527];
  short local_2c;
  undefined4 auStack_28 [3];
  undefined4 local_1c;
  undefined4 auStack_18 [3];

  bVar5 = 0;
  puVar2 = (undefined4 *)thunk_FUN_0042ae45(param_1);
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  uVar1 = *puVar2;
  auStack_28[(uint)bVar5 * -2] = *puVar3;
  auStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  (auStack_28 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  puVar2 = (undefined4 *)thunk_FUN_0042ae45(param_2);
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  local_1c = *puVar2;
  auStack_18[(uint)bVar5 * -2] = *puVar3;
  auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  (auStack_18 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_2c = (short)uVar1;
  if (local_2c == 0) {
    uVar4 = (ushort)local_1c == 0;
  }
  else if (local_2c == 1) {
    uVar4 = (ushort)local_1c == 1;
  }
  else {
    uVar4 = (ushort)local_1c == 2;
    if ((ushort)local_1c < 2) {
      uVar4 = 0;
    }
    else {
      FUN_0042b6f8(param_1,param_2);
    }
  }
  return uVar4;
}
