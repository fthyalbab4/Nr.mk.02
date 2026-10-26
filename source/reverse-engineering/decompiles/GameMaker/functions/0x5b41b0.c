// rea decompile_all
// name: FUN_005b41b0
// address: 0x5b41b0
// body: available
// range: 0x5b41b0-0x5b42b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005b41b0(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_24;
  int local_1c;
  int local_18;

  iVar2 = FUN_00701c28(&DAT_00700d94,1,param_1,param_2);
  local_1c = *(int *)(iVar2 + 8);
  if (-1 < local_1c + -1) {
    local_24 = 0;
    do {
      uVar1 = FUN_00404878();
      local_18 = *(int *)(iVar2 + 4);
      if (-1 < local_18 + -1) {
        iVar4 = 0;
        do {
          uVar3 = 0xff;
          uVar5 = 0xff;
          if ((float)*(int *)(iVar2 + 4) / 2.0 <= (float)iVar4) {
            uVar5 = FUN_00404878();
          }
          else {
            uVar3 = FUN_00404878();
          }
          uVar3 = FUN_005a5648(uVar1,uVar5,uVar3,0xff);
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + (*(int *)(iVar2 + 4) * local_24 + iVar4) * 4) =
               uVar3;
          iVar4 = iVar4 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return iVar2;
}
