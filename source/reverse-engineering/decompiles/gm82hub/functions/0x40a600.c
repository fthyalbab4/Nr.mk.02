// rea decompile_all
// name: FUN_0040a600
// address: 0x40a600
// body: available
// range: 0x40a600-0x40a71d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a600(uint param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  ushort local_1a [3];
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = 0;
  sVar2 = (*DAT_0068cb54)();
  if ((short)param_1 != sVar2) {
    local_10 = FUN_0040a5bc(&local_8);
    local_14 = 3;
    puVar3 = local_1a;
    do {
      *puVar3 = (ushort)(byte)PTR_s_0123456789ABCDEF_0067ca18[(ushort)param_1 & 0xf];
      param_1 = (param_1 & 0xffff) >> 4;
      local_14 = local_14 + -1;
      puVar3 = puVar3 + -1;
    } while (local_14 != -1);
    local_1a[1] = 0;
    local_1a[2] = 0;
    (*DAT_0068cb50)();
  }
  iVar4 = FUN_0040a5bc(&local_c);
  if (iVar4 != 0) {
    if (-1 < local_c + -2) {
      iVar5 = local_c + -1;
      local_14 = 0;
      do {
        if (*(short *)(iVar4 + local_14 * 2) == 0) {
          *(undefined2 *)(iVar4 + local_14 * 2) = 0x2c;
        }
        local_14 = local_14 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00408350(param_2,iVar4);
    FUN_00404340(iVar4);
  }
  if (local_10 != 0) {
    piVar9 = &local_14;
    uVar8 = 0;
    uVar7 = 0;
    (*DAT_0068cb50)();
    uVar6 = FUN_0040a5bc(&local_c);
    if ((local_8 != local_c) ||
       (cVar1 = FUN_0040a598(local_10,uVar6,local_c,uVar7,uVar8,piVar9), cVar1 != '\0')) {
      (*DAT_0068cb50)();
    }
    FUN_00404340(uVar6);
    FUN_00404340(local_10);
    return;
  }
  return;
}
