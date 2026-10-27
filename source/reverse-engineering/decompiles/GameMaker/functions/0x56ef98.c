// rea decompile_all
// name: FUN_0056ef98
// address: 0x56ef98
// body: available
// range: 0x56ef98-0x56f09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0056ef98(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int aiStackY_1868 [1521];
  int local_8c;
  undefined1 local_7c [16];
  int local_6c;
  undefined1 local_4c [16];
  int local_3c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;

  bVar5 = 0;
  local_1c = *param_2;
  local_18 = param_2[1];
  local_14 = param_2[2];
  local_10 = param_2[3];
  local_c = param_3;
  FUN_0040c114(0,0,0,&stack0xffffff74,0);
  piVar4 = local_c + (uint)bVar5 * -2 + 1;
  *local_c = local_8c;
  *piVar4 = *(int *)((int)&stack0xffffff78 + (uint)bVar5 * 0xfffffffe * 4);
  piVar4[(uint)bVar5 * -2 + 1] = *(int *)(&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (piVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(int *)((int)(&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
               ((uint)bVar5 * -2 + 1) * 4);
  if ((local_1c <= local_14) && (local_18 <= local_10)) {
    FUN_0056dcec(param_1,local_7c);
    if ((local_1c <= local_6c + 1) && (local_18 <= local_3c + 1)) {
      cVar2 = FUN_0056eeac(local_7c,local_1c,local_14,local_c + 2,local_c);
      if (cVar2 != '\0') {
        FUN_0056eeac(local_4c,local_18,local_10,local_c + 3,local_c + 1);
      }
      cVar2 = FUN_00405d08(param_1);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(**(int **)(param_1 + 0x270) + 0xc))();
        if (cVar2 == '\0') {
          iVar1 = *local_c;
          iVar3 = FUN_004edf8c(param_1);
          *local_c = iVar3 - local_c[2];
          iVar3 = FUN_004edf8c(param_1);
          local_c[2] = iVar3 - iVar1;
        }
      }
    }
  }
  return;
}
