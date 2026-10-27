// rea decompile_all
// name: FUN_005249dc
// address: 0x5249dc
// body: available
// range: 0x5249dc-0x524b40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005249dc(int *param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int extraout_EDX;
  int iVar4;
  undefined2 *puVar5;
  byte local_c24 [256];
  undefined2 local_b24 [384];
  int *local_824;
  byte *local_820;
  undefined2 *local_81c;
  int local_818;
  char local_812;
  undefined1 local_811;
  int local_804;
  int local_800 [511];

  if (param_1[2] < 2) {
    local_811 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 1;
    local_811 = 1;
    (**(code **)(*param_1 + 0x10))(param_1,&local_804);
    FUN_0052491c(0,param_1[2] + -1);
    iVar1 = param_1[2];
    iVar4 = extraout_EDX;
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      piVar2 = local_800;
      do {
        if (iVar4 != *piVar2) break;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = param_1[2];
    if (iVar4 != iVar1) {
      if (-1 < iVar1 + -1) {
        bVar3 = 0;
        piVar2 = local_800;
        do {
          local_c24[*piVar2] = bVar3;
          bVar3 = bVar3 + 1;
          piVar2 = piVar2 + 2;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      (**(code **)(*param_1 + 0x14))(param_1,local_c24);
      local_812 = '\0';
      local_818 = param_1[2];
      FUN_00404514(param_1[1],local_b24,local_818 * 3);
      iVar1 = param_1[2];
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        local_81c = local_b24;
        local_820 = local_c24;
        local_824 = &local_804;
        do {
          puVar5 = (undefined2 *)(param_1[1] + (uint)*local_820 * 3);
          *puVar5 = *local_81c;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(local_81c + 1);
          if ((*local_824 == 0) && (local_812 == '\0')) {
            local_812 = '\x01';
            local_818 = iVar4;
          }
          iVar4 = iVar4 + 1;
          local_824 = local_824 + 2;
          local_820 = local_820 + 1;
          local_81c = (undefined2 *)((int)local_81c + 3);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      param_1[2] = local_818;
      (**(code **)(*param_1 + 0x1c))();
    }
  }
  return local_811;
}
