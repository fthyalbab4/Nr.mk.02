// rea decompile_all
// name: FUN_004b8bc0
// address: 0x4b8bc0
// body: available
// range: 0x4b8bc0-0x4b8d0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b8bc0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_2c [16];
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  char local_5;

  local_10 = *param_1;
  uStack_c = param_1[1];
  local_1c = 0;
  if (DAT_0068f290 != 0) {
    local_14 = param_2;
    uVar2 = GetKeyState(0x11);
    if (((uVar2 & 0x8000) != 0) != (bool)*(char *)(*(int *)PTR_DAT_0068917c + 0xbc)) {
      (**(code **)(*DAT_0068f294 + 8))();
      iVar4 = *(int *)(DAT_0068f290 + 8);
      if (-1 < iVar4 + -1) {
        iVar5 = 0;
        do {
          local_18 = (int *)FUN_00438ec4(DAT_0068f290,iVar5);
          if ((local_18 != local_14) && (*(char *)((int)local_18 + 0x1ea) != '\0')) {
            cVar1 = (**(code **)(*local_18 + 0x5c))();
            if (cVar1 != '\0') {
              hWnd = (HWND)FUN_004c45dc(local_18);
              BVar3 = IsWindowVisible(hWnd);
              if (BVar3 != 0) {
                puVar6 = &stack0xfffffffc;
                cVar1 = FUN_004b8b7c();
                if (cVar1 == '\0') {
                  cVar1 = FUN_00406268(local_18,local_14,puVar6);
                  if (cVar1 != '\0') {
                    local_5 = '\x01';
                    FUN_00406268(local_18,local_14,local_2c,&local_5,&local_10);
                    if (local_5 != '\0') {
                      cVar1 = FUN_0040c39c(local_2c,&local_10);
                      if (cVar1 != '\0') {
                        FUN_004b82d8(DAT_0068f294,local_18);
                      }
                    }
                  }
                }
              }
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (0 < DAT_0068f294[2]) {
        local_1c = FUN_004b8390(DAT_0068f294);
      }
      if (local_1c != 0) {
        cVar1 = FUN_004b89e0(local_1c);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
      }
    }
  }
  return local_1c;
}
