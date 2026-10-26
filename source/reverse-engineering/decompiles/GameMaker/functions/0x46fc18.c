// rea decompile_all
// name: FUN_0046fc18
// address: 0x46fc18
// body: available
// range: 0x46fc18-0x46fd05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046fc18(void)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int in_stack_00000004;
  int local_24;
  int local_20;
  int local_1c [5];
  int local_8;

  iVar4 = 3;
  puVar2 = &DAT_007780fc;
  piVar3 = local_1c;
  do {
    FUN_00438bf4(*(int *)(puVar2 + (uint)*(byte *)(in_stack_00000004 + -1) * 0x18) *
                 *(int *)(in_stack_00000004 + 8) + *(int *)(in_stack_00000004 + -0xc),
                 *(int *)(puVar2 + (uint)*(byte *)(in_stack_00000004 + -1) * 0x18 + 4) *
                 *(int *)(in_stack_00000004 + 8) + *(int *)(in_stack_00000004 + -8),&local_24);
    *piVar3 = local_24;
    piVar3[1] = local_20;
    piVar3 = piVar3 + 2;
    puVar2 = puVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  cVar1 = *(char *)(in_stack_00000004 + -1);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_00438bf4(local_1c[4] + -1,local_8 + 1,&local_24);
      local_1c[4] = local_24;
      local_8 = local_20;
      goto LAB_0046fcec;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        FUN_00438bf4(local_1c[4] + 1,local_8 + -1,&local_24);
        local_1c[4] = local_24;
        local_8 = local_20;
      }
      goto LAB_0046fcec;
    }
  }
  FUN_00438bf4(local_1c[4] + 1,local_8 + 1,&local_24);
  local_1c[4] = local_24;
  local_8 = local_20;
LAB_0046fcec:
  (**(code **)(**(int **)(in_stack_00000004 + -0x10) + 0x68))
            (*(int **)(in_stack_00000004 + -0x10),local_1c,2);
  return;
}
