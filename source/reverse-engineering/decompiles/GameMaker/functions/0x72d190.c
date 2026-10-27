// rea decompile_all
// name: FUN_0072d190
// address: 0x72d190
// body: available
// range: 0x72d190-0x72d324 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0072d190(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte local_16;
  undefined1 local_15;
  uint local_14;

  iVar2 = FUN_0072b6bc(param_1);
  local_16 = *(byte *)(iVar2 + 0x460);
  if (8 < local_16) {
    local_16 = 8;
  }
  iVar3 = FUN_0072cd4c(param_1,param_3);
  bVar1 = *(byte *)(iVar3 + param_2 / (int)(8 / (ulonglong)local_16)) >>
          (('\b' - local_16) - (char)(param_2 % (int)(8 / (ulonglong)local_16)) * local_16 & 0x1f) &
          (byte)(0xff >> (8 - local_16 & 0x1f));
  if (*(char *)(iVar2 + 0x461) == '\0') {
    if (*(char *)(iVar2 + 0x460) == '\x01') {
      local_15 = *(undefined1 *)(param_1 + 0x13d + ((uint)bVar1 * 0xff & 0xff));
    }
    else {
      local_15 = *(undefined1 *)
                  (param_1 + 0x13d +
                  ((ushort)((short)(char)(('\x01' << (local_16 & 0x1f)) + '\x01') *
                           (short)(char)bVar1) & 0xff));
    }
    local_14 = (uint)CONCAT12(local_15,CONCAT11(local_15,local_15));
  }
  else if (*(char *)(iVar2 + 0x461) == '\x03') {
    uVar4 = FUN_007272ec(*(undefined4 *)(param_1 + 0x138),&PTR_LAB_00725940);
    uVar5 = FUN_0072aa0c(uVar4,bVar1);
    local_14 = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x13d + (uVar5 & 0xff)),
                              CONCAT11(*(undefined1 *)(param_1 + 0x13d + (uVar5 >> 8 & 0xff)),
                                       *(undefined1 *)(param_1 + 0x13d + (uVar5 >> 0x10 & 0xff))));
  }
  else {
    local_14 = 0;
  }
  return local_14;
}
